#include "qemailvalidator.h"

QEmailValidator::QEmailValidator() {}

QValidator::State QEmailValidator::validate(QString &input, int &) const {
  QRegularExpression re("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b",
                        QRegularExpression::CaseInsensitiveOption);
  auto match = re.match(input);
  if (match.hasMatch()) {
    return QValidator::State::Acceptable;
  }
  return QValidator::State::Intermediate;
}

static void registerTypes() {
    qmlRegisterType<MyType>("QEmailValidator", 1, 0, "QEmailValidator");
}

Q_COREAPP_STARTUP_FUNCTION(registerTypes)
