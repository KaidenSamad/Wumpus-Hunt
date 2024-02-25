#include <stdio.h>
#include <string.h>

int main(){
    char choice[100];


    printf("You are at the begining of a Wumpus Hunt. Where shall we hunt?: river, cave, forest, or cliffs?\n");
    scanf("%s", choice);

    if (strcmp(choice, "forest") == 0){
        printf("From forest: redwood, pine, or hardwood?\n");
        scanf("%s", choice);
    
        if (strcmp(choice, "redwood") == 0){
            printf("From redwood: ground or canopy?\n");
            scanf("%s", choice);
        
            if (strcmp(choice, "ground") == 0) {
                printf("From ground: humboldt or calaveras?\n");
                scanf("%s", choice);
            
                if (strcmp(choice, "humboldt") == 0){
                    printf("humboldt\nTHE HUNT IS OVER!\nHippies surround you in a drum circle!\n");
                }
                else {
                    printf("calaveras\nTHE HUNT IS OVER!\nLoggers stopped you to count your rings!\n");
                }
            if (strcmp(choice, "canopy") == 0){
                printf("THE HUNT IS OVER!\nLoggers stopped you to count your rings!\n");
            }
            }
        }
        if (strcmp(choice, "pine") == 0){
            printf("From pine: conifer or shrub?\n");
            scanf("%s", choice);
        
            if (strcmp(choice, "conifer") == 0){
                printf("conifer\nTHE HUNT IS OVER!\nIt is a sappy ending!\n");
                scanf("%s", choice);
            }
            else{
                printf("shrub\nTHE HUNT IS OVER!\nYou caught a snipe, but not a wumpus!");
            }
        }
        if (strcmp(choice, "hardwood") == 0){
            printf("From hardwood: oak or maple?\n");
            scanf("%s", choice);
        }
                if (strcmp(choice, "maple") == 0){
                    printf("From maple: pancakes, waffles, or frenchtoast?\n");
                    scanf("%s", choice);
                
                    if (strcmp(choice, "pancakes") == 0){
                        printf("From pancakes: chocolatechip or blueberry?\n");
                        scanf("%s", choice);
                    
                        if (strcmp(choice, "chcolatechip") == 0){
                            printf("chcolatechip\nTHE HUNT IS OVER!\nYou are distracted!\n");
                        }
                        else{
                            printf("blueberry\nTHE HUNT IS OVER!\nYou take the bait!\n");
                        }
                    }
                    if (strcmp(choice, "waffles") == 0){
                        printf("From waffles: regular or wholewheaty?\n");
                        scanf("%s", choice);
                    
                        if (strcmp(choice, "regular") == 0){
                            printf("regular\nTHE HUNT IS OVER!\nYou fell asleep!\n");
                            }
                        else{
                            printf("wholewheat\nTHE HUNT IS OVER!\nNature calls!\n");
                        }
                    }
                    else{
                        printf("frenchtoast\nTHE HUNT IS OVER!\nBut french toast is not a bad idea!");
                    }
                }
                else{
                printf("oak\nTHE HUNT IS OVER!\nYou are lost!");
                } 
    }
    if (strcmp(choice, "river") == 0){
        printf("From river: upstream, downstream, or calm?\n");
        scanf("%s", choice);
    
        if (strcmp(choice, "upstream") == 0){
            printf("upstream\nTHE HUNT IS OVER!\nYou lost your paddle!\n");
        }
        if (strcmp(choice, "downstream") == 0){
            printf("From downstream: rapids or calm\n");
            scanf("%s", choice);
        
            if (strcmp(choice, "rapids") == 0){
                printf("rapids\nTHE HUNT IS OVER!\nYou capsized and lost all your equipment!");
            }
            else{
                printf("calm\nTHE HUNT IS OVER!\nYou are dead in the water. Mosquitoes feast on your unlucky route!");
            }
        }
    }
    if (strcmp(choice, "cave") == 0){
        printf("From cave: tunnel or cavern\n");
        scanf("%s", choice);
    
        if (strcmp(choice, "cavern") == 0){
            printf("From cavern: nearside or farside\n");
            scanf("%s", choice);
        
            if (strcmp(choice, "nearside") == 0){
                printf("From nearside: lookup or lookdown\n");
                scanf("%s", choice);
            
                if(strcmp(choice, "lookup") == 0){
                printf("lookup\nTHE HUNT IS OVER!\nYou fell in a bottomless pit!\n");
                }
                else{
                    printf("lookdown\nTHE HUNT IS OVER!\nA giant bat carried you off!\n");
                }
            }
            else{
                printf("farside\nTHE HUNT IS WON!\nYou found the Wumpus. Quick Shoot.\n");
            }
        }
        else{
            printf("tunnel\nTHE HUNT IS OVER!\nYou found a bear. He was hungry!");
        }
    }
    if (strcmp(choice, "cliffs") == 0){
        printf("From cliffs: ledges or peaks\n");
        scanf("%s", choice);
    
        if (strcmp(choice, "ledges") == 0){
            printf("From ledges: high or low\n");
            scanf("%s", choice);
        
            if (strcmp(choice, "high") == 0){
                printf("From high: eagle or rattlesnake\n");
                scanf("%s", choice);
            
                if (strcmp(choice, "eagle") == 0){
                    printf("eagle\nTHE HUNT IS OVER!\nAn eagle plucked your eyes out!");
                } 
                else{
                    printf("rattlesnake\nTHE HUNT IS OVER!\nWhy? Of course, it bit you!");
                }
            }
        }
            else{
                printf("low\nTHE HUNT IS OVER!\nYour hunt was uneventful\n");
            }
        if (strcmp(choice, "peaks") == 0){
            printf("From peaks: snow or tree-line\n");
            scanf("%s", choice);
        
            if (strcmp(choice, "tree-line") == 0){
                printf("From tree-line: crag or cave\n");
                scanf("%s", choice);
            
                if (strcmp(choice, "crag") == 0){
                    printf("crag\nTHE HUNT IS OVER!\nThough, you smelled wumpus in the area!\n");
                }
                else{
                    printf("cave\nTHE HUNT IS WON!\nYou found the wumpus!\n");
                }
            }
        }
            else{
                printf("snow\nTHE HUNT IS OVER!\nAn avalanche buries your party.\n");
            }
    }

    return 0;
}