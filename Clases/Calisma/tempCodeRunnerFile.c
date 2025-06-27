#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <time.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();

    SDL_Window *window = SDL_CreateWindow("Dijital Saat", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 400, 200, 0);
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

    TTF_Font *font = TTF_OpenFont("/System/Library/Fonts/Supplemental/Arial.ttf", 48);
    SDL_Color color = {255, 0, 0, 255};

    int running = 1;
    SDL_Event event;

    while (running)
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                running = 0;
            }
        }

        // Zamanı al
        time_t t = time(NULL);
        struct tm *tm_info = localtime(&t);
        char buffer[9];
        strftime(buffer, sizeof(buffer), "%H:%M:%S", tm_info);

        SDL_Surface *surface = TTF_RenderText_Solid(font, buffer, color);
        SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, surface);

        int texW = 0, texH = 0;
        SDL_QueryTexture(texture, NULL, NULL, &texW, &texH);
        SDL_Rect dstrect = {100, 50, texW, texH};

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderClear(renderer);
        SDL_RenderCopy(renderer, texture, NULL, &dstrect);
        SDL_RenderPresent(renderer);

        SDL_FreeSurface(surface);
        SDL_DestroyTexture(texture);

        SDL_Delay(1000);
    }

    TTF_CloseFont(font);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    TTF_Quit();
    SDL_Quit();

    return 0;
}