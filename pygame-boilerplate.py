import pygame
 
pygame.init()
screen_size = (700, 500)
 
screen = pygame.display.set_mode(screen_size)
pygame.display.set_caption("pygame Test")
 
clock = pygame.time.Clock()
 
running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
     
    screen.fill(BLACK)
    #DRAW
     
    # flip() updates the screen 
    pygame.display.flip()
    clock.tick(60)
pygame.quit()
