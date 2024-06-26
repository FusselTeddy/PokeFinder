/*
 * This file is part of PokéFinder
 * Copyright (C) 2017-2024 by Admiral_Fish, bumba, and EzPzStreamz
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef IDS4_HPP
#define IDS4_HPP

#include <QWidget>

class IDModel4;

namespace Ui
{
    class IDs4;
}

/**
 * @brief Provides settings and filters to RNG TID/SID in Gen 4 games
 */
class IDs4 : public QWidget
{
    Q_OBJECT
public:
    /**
     * @brief Construct a new IDs4 object
     *
     * @param parent Parent widget, which takes memory ownership
     */
    IDs4(QWidget *parent = nullptr);

    /**
     * @brief Destroy the IDs4 object
     */
    ~IDs4() override;

private:
    Ui::IDs4 *ui;

    IDModel4 *searcherModel;
    IDModel4 *seedFinderModel;

private slots:
    /**
     * @brief Lists possible candidates for the TID obtained
     */
    void find();

    /**
     * @brief Searches and displays results
     */
    void search();

    /**
     * @brief Opens seed to time. Provides current game version and seed from the selected tableview row.
     */
    void seedToTime();
};

#endif // IDS4_HPP
