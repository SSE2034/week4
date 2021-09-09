//CHANGE COPYRIGHT HEADER WHEN YOU WRITE CODE (SUTDENT NAME, VERSION DATE MUST BE CHANGED)

/* ******************************************************************************************************************
 * Copyright (c) 2021 [STUDENT_NAME], Donghun-Jeong, Seokin-Hong, Sungkyunkwan Universit All Right Reserved
 *
 * - File Name : ppm.cc
 * - File Type : c++ source code
 * - File Version(Last Update Date) : 1.0 (Sep. 9, 2021.)
 * - Date : Sep. 9, 2021.
 * - Description : Version 1.0 is provided skeleton code for SSE2034-41(SKKU, 2021) class HW4.
 *                 This file has definition of ppm_process. In version 1.0 process_ppm() is not implemented.
 *                 After version 1.0, process_ppm() must be implemented.
 * ****************************************************************************************************************/

//DO NOT MODIFY PROVIDED PARTS! IF THESE PARTS ARE MODIFIED, YOU WILL GET LOW GRADE!
//WITHOUT MARKED PART! DO NOT MODIFY ANY CODE!

//Do Not Include Any Other Header Without Below
#include "ppm.h"
#include <fstream>
#include <cmath>
#include <iostream>
using namespace std;

/***********************************************************************************************************
 * TIPS & REFERENCES for HW4
 *
 * (1) pbm, pgm, ppm file format description : refer to HW4 PDF file
 *
 * (2) RGB to GRAY Scale formula : 0.299 * R + 0.587 * G + 0.114 * B (Round To UINT8(unsigned char) value)
 *     Ex 1) R : 120, G : 60, B : 35 -> Gray : 75.09 -> 75
 *     Ex 2) If Gray Value is 60.9 -> 61
 *
 * (3) W/B Bitmap Value : if gray > max_val/2 -> 0, else 1
 *     Ex) R : 120, G : 60, B :35 -> Gray : 75 -> W/B 1
 *
 * (4) Color Inversion formula : max_val - R, max_val - G, max_val - B
 *     Ex) R : 120, G : 60, B : 35 -> R : 135, G : 195, B : 220
 *
 * (5) All output files must be loaded in ppm image viewer.
 *     Viewer Site URL : http://paulcuth.me.uk/netpbm-viewer/
 *
 * ********************************************************************************************************/

PROCESS_RESULT process_ppm(char *in_file_name, char *out_pbm_name, char *out_pgm_name, char *out_ppm_name) {

    //WRITE YOUR CODE Between /*****************************/ lines.
    /**************************************************************************************************/

    /**************************************************************************************************/
}


