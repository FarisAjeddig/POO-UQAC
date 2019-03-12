/*
 * Date.h
 *
 *  Created on: 22 févr. 2019
 *      Author: faris
 */

#ifndef SRC_DATE_H_
#define SRC_DATE_H_



class Date {
	private:
		int day, month, year;

	public:
		Date();
		Date(int d, int m, int y);
		void afficher();
		int getDay();
		int getMonth();
		int getYear();
};



#endif /* SRC_DATE_H_ */
