void joycon(int sinpakuvalue, item, x_size, y_size)
  player_x += x_play;  // x方向にボールを移動
  player_y += y_play;  // y方向にボールを移動
  if (joyy <= middle_lo) {
    if (player_x != 0) {
      x_play = -(1+sinpakuvalue+item);  // バーを左に移動
    }    
  }  
  else if(joyy >= middle_hi) {
    if (player_x != MAX_DISP_X - x_size) {
      x_play = +1+sinpakuvalue+item;  // バーを右に移動
    }
  }
  else if ((joyy > middle_lo) && (joyy < middle_hi)) {
    x_play = 0;
  }

 // バーyの描画
 if (joyx >= middle_hi) {
    if (player_y != 0) {
      y_play = -(1+sinpakuvalue+item);  // バーを上に移動
    }    
  }
  else if(joyx <= middle_lo) {
    if (player_y != MAX_DISP_Y - y_size) {
      y_play = +1+sinpakuvalue+item;  // バーを下に移動
    }
  }
  else if ((joyy > middle_lo) && (joyy < middle_hi)){
    y_play = 0;
  }
  

