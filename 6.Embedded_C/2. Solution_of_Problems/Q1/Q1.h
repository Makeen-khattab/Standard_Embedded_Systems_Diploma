#ifndef Q1_H_
#define Q1_H_
/*
 * Guarding the file Equivalent to #paragma ones
 *
 *
 * */
#define GET_BIT(REG,BIT_NUM)	((REG>>BIT_NUM)&(0x01))
#define GET_BIT(REG,BIT_NUM) ((REG & (1<<BIT_NUM))>> BIT_NUM)

#endif /* Q1_H_ */
