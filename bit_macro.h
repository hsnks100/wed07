/* 한 비트 클리어 */
#define clear_bit(data, loc)    ((data) &= ~(0x1 << (loc)))
  
/* 한 비트 설정 */
#define set_bit(data, loc)      ((data) |= (0x1 << (loc)))
  
/* 한 비트 반전 */
#define invert_bit(data, loc)   ((data) ^= (0x1 << (loc)))
  
/* 비트 검사 */
#define check_bit(data, loc)    ((data) & (0x1 << (loc)))
  

// 0x1 = 0b1
// 0x2 = 0b10
// 0x3 = 0b11
// 0x4 = 0b100
// 0x5 = 0b101
// 0x6 = 0b110
// 0x7 = 0b111
// 0x8 = 0b1000
// 0x9 = 0b1001
// 0xA = 0b1010
// 0xB = 0b1011
// 0xC = 0b1100
// 0xD = 0b1101
// 0xE = 0b1110
// 0xF = 0b1111
