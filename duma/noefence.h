/*
 * Electric Fence - Red-Zone memory allocator.
 * Copyright (C) 1987-1999 Bruce Perens <bruce@perens.com>
 * Copyright (C) 2002-2003 Hayati Ayguen <hayati.ayguen@epost.de>, Procitec GmbH
 * License: GNU GPL (GNU General Public License, see COPYING-GPL)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 *
 * FILE CONTENTS:
 * header file for inclusion from YOUR application code.
 * Include this header before including foreign includes
 * from inside your own headers files.
 */


/* remove previous EFence definitions */

#ifdef EF_newFrame
#undef EF_newFrame
#endif

#ifdef EF_delFrame
#undef EF_delFrame
#endif

#ifdef EF_MALLOC_RETTYPE
#undef EF_MALLOC_RETTYPE
#endif

#ifdef EF_newFrame
#undef EF_newFrame
#endif


/* remove previous wrappers to standard C functions */

#ifdef malloc
#undef malloc
#endif

#ifdef calloc
#undef calloc
#endif

#ifdef realloc
#undef realloc
#endif

#ifdef free
#undef free
#endif

#ifdef memalign
#undef memalign
#endif


/* remove previous wrappers to standard C++ functions / operators */

#ifdef new
#undef new
#endif

#ifdef delete
#undef delete
#endif


/* remove previous EFence C++ definitions */

#ifdef NEW_ELEM
#undef NEW_ELEM
#endif

#ifdef NEW_ARRAY
#undef NEW_ARRAY
#endif

#ifdef DEL_ELEM
#undef DEL_ELEM
#endif

#ifdef DEL_ARRAY
#undef DEL_ARRAY
#endif

/***************/
/* END OF FILE */
/***************/