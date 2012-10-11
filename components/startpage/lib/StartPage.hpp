#ifndef STARTPAGE_HPP
#define STARTPAGE_HPP

#include "stable.h"

class StartPage : public QWidget
{
    Q_OBJECT
public:
    explicit StartPage(QWidget *parent = 0);

    void connectSignals();
signals:

public slots:
    void on_library_currentChanged(const QModelIndex& ,const QModelIndex& );
    void on_projects_currentChanged(const QModelIndex& ,const QModelIndex& );
    void on_study_material_currentChanged(const QModelIndex& ,const QModelIndex& );
    void on_get_started_currentChanged(const QModelIndex& ,const QModelIndex& );
};

#endif // STARTPAGE_HPP
