#include "delegate.h"

Delegate::Delegate(QObject *parent) {}


QWidget *Delegate::createEditor(QWidget *parent, const QModelIndex &index) const
{
    QSpinBox *editor = new QSpinBox(parent);

    editor->setMinimum(0);
    editor->setMaximum(100);

    return editor;
}

void Delegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    int value = index.model()->data(index, Qt::EditRole).toInt();

    QSpinBox *spinBox = static_cast<QSpinBox*>(editor);
    spinBox->setValue(value);
}

void Delegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    QSpinBox *spinBox = static_cast<QSpinBox*>(editor);
    spinBox->interpretText();

    int value = spinBox->value();

    model->setData(index, value, Qt::EditRole);
}

void Delegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    editor->setGeometry(option.rect);
}
