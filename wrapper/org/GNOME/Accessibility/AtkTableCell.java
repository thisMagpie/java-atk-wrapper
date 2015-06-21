/*
 * Java ATK Wrapper for GNOME
 * Copyright (C) 2015 Magdalen Berns <m.berns@thismagpie.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

package org.GNOME.Accessibility;

import javax.accessibility.*;

public class AtkTableCell extends AtkTable {

  AccessibleContext ac;

  AccessibleExtendedTable acc_table_cell;

  public AtkTableCell (AccessibleContext ac) {
    super(ac);
    this.ac = ac;
    AccessibleTable acc_table = ac.getAccessibleTable();

    if (acc_table instanceof AccessibleExtendedTable) {
      acc_table_cell = (AccessibleExtendedTable)acc_table;
    } else {
      acc_table_cell = null;
    }
  }

/**
 * getTable
 * @return: Reference to the accessible of the containing table as an
 *          AccessibleTable instance.
 */
  public AccessibleTable getTable() {
    System.out.println("Get Table: " + acc_table_cell.toString());
    return acc_table_cell;
  }
}

