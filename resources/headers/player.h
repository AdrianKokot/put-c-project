#ifndef PLAYER_H
#define PLAYER_H

#include "./checkers.h"

/**
 * @brief Player representation on Board.
 *
 * @param bool bIsActive
 * @param int iPawnCount
 * @param sfTexture *textures
 * @param Pawn **pawns
 * @param Board *board
 */
struct Player
{
  bool bIsActive;
  int iPawnCount;
  sfTexture **textures;
  Pawn **pawns;
  Board *board;
  Pawn *selectedPawn;
};

/**
 * @brief Player constructor.
 *
 * @param iPawnCount number of pawns to create
 * @param board that player is assigned to
 * @param textures array of textures that contains two textures:
 *                     the standard pawn texture and
 *                     the queen pawn texture
 * @param isTopPlayer bool that deremines where pawns
 *                    are going to be drawn
 * @return created player
 */
Player *player_create(int iPawnCount, Board *board, sfTexture **textures, bool isTopPlayer);

/**
 * @brief Makes given player an active one on the board.
 *
 * @param player player that will be made active one
 * @return void
 */
void player_makeActive(Player *player);

#include "./pawn.h"

#endif