# QEmailValidator

A class that provides a QValidator to validate emails

Can be used just like any [QValidator](https://doc.qt.io/qt-5/qvalidator.html).

## Installation

The package is provided as a qpm package,
[`co.podzim.qemailvalidator`](https://www.qpm.io/packages/co.podzim.qemailvalidator/index.html).
To install:

1. Install qpm (See
   [GitHub - Installing](https://github.com/Cutehacks/qpm/blob/master/README.md#installing),
   for **windows** see below)
2. In your projects root directory, run `qpm install co.podzim.qemailvalidator`
3. Include qpm to your project by adding `include(vendor/vendor.pri)` to your
   `.pro` file

## QML Usage

```
import QEmailValidator 1.0

TextField {
  id: emailField
  placeholderText: qsTr("Email")
  validator: QEmailValidator{}
}

Label {
  id: emailError
  visible: emailField.acceptableInput // only show if email is invalid
  color: "red"
  text: "Invalid Email"
}
```

Check their
[GitHub - Usage for App Developers](https://github.com/Cutehacks/qpm/blob/master/README.md#usage-for-app-developers)
to learn more about qpm.

**Important for Windows users:** QPM Version _0.10.0_ (the one you can download
on the website) is currently broken on windows! It's already fixed in master,
but not released yet. Until a newer versions gets released, you can download the
latest dev build from here:

* https://storage.googleapis.com/www.qpm.io/download/latest/windows_amd64/qpm.exe
* https://storage.googleapis.com/www.qpm.io/download/latest/windows_386/qpm.exe
