void PlayerHit(x_size, y_size, )
  if (y == (player_y + 10) ) {  // キャラに当たったとき
    if (((x + 10) > player_x) && (x < (player_x + 10))){
    PIXEL.freeSprite(0);
    x = 10;
    y = 27;
    PIXEL.drawSprite(0, x, y);
    }
  }
  if ((y + 10) == player_y) {  // キャラに当たったとき
    if (((x + 10) > player_x) && (x < (player_x + 10))){
    PIXEL.freeSprite(0);
    x = 10;
    y = 27;
    PIXEL.drawSprite(0, x, y);
    }
  }
  if (x == (player_x + 10) ) {  // キャラに当たったとき
    if (((y + 10) > player_y) && (y < (player_y + 10))){
    PIXEL.freeSprite(0);
    x = 10;
    y = 27;
    PIXEL.drawSprite(0, x, y);
    }
  }
  if ((x + 10) == player_x) {  // キャラに当たったとき
    if (((y + 10) > player_y) && (y < (player_y + 10))){
    PIXEL.freeSprite(0);
    x = 10;
    y = 27;
    PIXEL.drawSprite(0, x, y);
    }
  }
  
