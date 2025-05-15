#pragma once

#ifndef LIBTRUCO_TRUCO_
#define LIBTRUCO_TRUCO_

#include <stdint.h>

typedef enum truco_rank
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
    : uint8_t
#endif
{
        TRUCO_RANK_FOUR  = 0u, /* 🃄 🂤 🂴 🃔 */
        TRUCO_RANK_FIVE  = 1u, /* 🃅 🂥 🂵 🃕 */
        TRUCO_RANK_SIX   = 2u, /* 🃆 🂦 🂶 🃖 */
        TRUCO_RANK_SEVEN = 3u, /* 🃇 🂧 🂷 🃗 */
        TRUCO_RANK_QUEEN = 4u, /* 🃍 🂭 🂽 🃝 */
        TRUCO_RANK_JACK  = 5u, /* 🃋 🂫 🂻 🃛 */
        TRUCO_RANK_KING  = 6u, /* 🃎 🂮 🂾 🃞 */
        TRUCO_RANK_ACE   = 7u, /* 🃁 🂡 🂱 🃑 */
        TRUCO_RANK_TWO   = 8u, /* 🃂 🂢 🂲 🃒 */
        TRUCO_RANK_THREE = 9u, /* 🃃 🂣 🂳 🃓 */
} truco_rank_t;

typedef enum truco_suit
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202311L
    : uint8_t
#endif
{
        TRUCO_SUIT_DIAMONDS = 0u, /* ♦ */
        TRUCO_SUIT_SPADES   = 1u, /* ♠ */
        TRUCO_SUIT_HEARTS   = 2u, /* ♥ */
        TRUCO_SUIT_CLUBS    = 3u, /* ♣ */
} truco_suit_t;

typedef struct truco_card
{
        truco_rank_t rank;
        truco_suit_t suit;
} truco_card_t;

#endif /* LIBTRUCO_TRUCO_ */
