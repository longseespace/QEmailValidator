#ifndef QEMAILVALIDATOR_H
#define QEMAILVALIDATOR_H

#include <qvalidator.h>

class QEmailValidator : public QValidator {
public:
  QEmailValidator();

  // QValidator interface
public:
  State validate(QString &, int &) const Q_DECL_OVERRIDE;
};

#endif // QEMAILVALIDATOR_H
