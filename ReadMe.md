Name :- Siddharth Rajendra Shah

List of bugs :-

1. In the constructor :-

-- A check has to be done before the start of the game on the parameters passed in the constructor. Since DEFAULT_TO_WIN can not be more than the heigth and width of the board. This would make the game worthless. For eg. if the height and width of the game is 2 and 2 it is impossible to get a combination of a toWin varible with value 4 and win the match.


2. In the inbounds function:-

There should be proper 'OR ' clause between all the four conditions being checked. Currently the inside variable is being overridden in the height condition if loop. This makes the width condition irrelavent. The condition should have been if ( w>=width || w<0 || h<0 || h>=heigth ) to give proper return value after checking both width and height of the board.
