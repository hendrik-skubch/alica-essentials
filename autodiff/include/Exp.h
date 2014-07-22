/*
 * Exp.h
 *
 *  Created on: Jun 12, 2014
 *      Author: psp
 */

#ifndef EXP_H_
#define EXP_H_

#include "Term.h"

namespace AutoDiff
{

	class Exp : public Term
	{
	public:
		Exp(shared_ptr<Term> arg);

		int accept(shared_ptr<ITermVisitor> visitor);

		shared_ptr<Term> aggregateConstants();
		shared_ptr<Term> derivative(shared_ptr<Variable> v);

		shared_ptr<Term> getArg();
	private:
		shared_ptr<Term> _arg;
	};

} /* namespace AutoDiff */

#endif /* EXP_H_ */
