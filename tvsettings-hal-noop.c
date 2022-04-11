/*
* If not stated otherwise in this file or this component's LICENSE file the
* following copyright and licenses apply:
*
* Copyright 2022 Sky UK
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include <stdio.h>
#include <string.h>
#include "tvSettings.h"
#include "mfrMgr.h"


tvError_t tvInit() {

	printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
	return tvERROR_NONE;
}

tvError_t tvTerm() {

	printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
	return tvERROR_NONE;
}

/* Function to get Picture Mode from driver */
tvError_t GetTVPictureMode(tvPictureMode_t *pictureMode) {

	printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
	return tvERROR_NONE;
}

/* Function to set Picture Mode to driver */
tvError_t SetTVPictureMode(tvPictureMode_t pictureMode) {

	printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
	return tvERROR_NONE;
}

tvError_t GetBacklight(int *backlight) {

	printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
	return tvERROR_NONE;
}

tvError_t SetBacklight(int backlight) {

	printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
	return tvERROR_NONE;
}

tvError_t GetSupportedBacklightModes(int *blModes) {
   printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
   return tvERROR_NONE;
}

tvError_t GetCurrentBacklightMode(tvBacklightMode_t *blMode) {
   printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
   return tvERROR_NONE;
}

tvError_t SetCurrentBacklightMode(tvBacklightMode_t blMode) {
   printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
   return tvERROR_NONE;
}

tvError_t SetBrightness(int brightness) {

	printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
	return tvERROR_NONE;
}

tvError_t GetBrightness(int *brightness) {

	printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
	return tvERROR_NONE;
}

tvError_t SetContrast(int contrast) {

	printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
	return tvERROR_NONE;
}

tvError_t GetContrast(int *contrast) {

	printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
	return tvERROR_NONE;
}

tvError_t SetSharpness(int sharpness) {

	printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
	return tvERROR_NONE;
}

tvError_t GetSharpness(int *sharpness) {

	printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
	return tvERROR_NONE;
}

tvError_t SetSaturation(int saturation) {

	printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
	return tvERROR_NONE;
}

tvError_t GetSaturation(int *saturation) {

	printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
	return tvERROR_NONE;
}

tvError_t SetHue(int hue) {

	printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
	return tvERROR_NONE;
}

tvError_t GetHue(int *hue) {

	printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
	return tvERROR_NONE;
}

tvError_t SetColorTemperature(tvColorTemp_t colorTemp) {

	printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
	return tvERROR_NONE;
}

tvError_t GetColorTemperature(tvColorTemp_t *colorTemp) {

	printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
	return tvERROR_NONE;
}

tvError_t GetAspectRatio(tvDisplayMode_t *dispMode) {

	printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
	return  tvERROR_NONE;
}

tvError_t SetAspectRatio(tvDisplayMode_t dispMode) {

	printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
	return tvERROR_NONE;
}

tvError_t SetRGBPattern(int r,int g, int b) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t GetRGBPattern(int *r,int *g,int *b) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SetGrayPattern(int YUVValue)

{
   printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
   return tvERROR_NONE;
}

tvError_t GetGrayPattern(int* YUVValue) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SetColorTemp_Rgain(tvColorTemp_t colorTemp, int rgain)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t GetColorTemp_Rgain(tvColorTemp_t colorTemp, int* rgain)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SetColorTemp_Ggain(tvColorTemp_t colorTemp, int ggain)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
   return tvERROR_NONE;
}

tvError_t GetColorTemp_Ggain(tvColorTemp_t colorTemp, int* ggain)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SetColorTemp_Bgain(tvColorTemp_t colorTemp, int bgain)
{
     printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t GetColorTemp_Bgain(tvColorTemp_t colorTemp, int* bgain)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SetColorTemp_R_post_offset(tvColorTemp_t colorTemp, int rpostoffset)
{
   printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
   return tvERROR_NONE;
}

tvError_t GetColorTemp_R_post_offset(tvColorTemp_t colorTemp, int* rpostoffset)
{
   printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
   return tvERROR_NONE;
}

tvError_t SetColorTemp_G_post_offset(tvColorTemp_t colorTemp, int gpostoffset)
{
   printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
   return tvERROR_NONE;
}

tvError_t GetColorTemp_G_post_offset(tvColorTemp_t colorTemp, int* gpostoffset)
{
   printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
   return tvERROR_NONE;
}


tvError_t SetColorTemp_B_post_offset(tvColorTemp_t colorTemp, int bpostoffset)
{
   printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
   return tvERROR_NONE;
}

tvError_t GetColorTemp_B_post_offset(tvColorTemp_t colorTemp, int* bpostoffset)
{
   printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
   return tvERROR_NONE;
}

tvError_t GetTVSupportedPictureModes(pic_modes_t *pictureModes[],unsigned short *count) {
  printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
  return tvERROR_NONE;
}

static tvPictureMode_t getPicModeEnum(const char * pictureMode)
{
    tvPictureMode_t retValue = tvPictureMode_MAX;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return retValue;
}

tvError_t GetTVSupportedDVModes(pic_modes_t *dvModes[],unsigned short *count) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t GetTVDolbyVisionMode(char *dolbyMode) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SetTVDolbyVisionMode(const char * dolbyMode) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SetTVHDR10Mode(const char * hdr10Mode) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SetTVHLGMode(const char *hlgMode) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SetDynamicContrast(const char *dynamicContrastEnable)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t GetDynamicContrast(char *isDynamicContrastEnabled)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

int sourceIdFromOffset(int offset)
{
    int sourceId=0;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return sourceId;
}

tvError_t SetColorTemp_Rgain_onSource(tvColorTemp_t colorTemp, int rgain,int sourceOffset, int saveOnly)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t GetColorTemp_Rgain_onSource(tvColorTemp_t colorTemp, int* rgain,int sourceOffset)
{

    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SetColorTemp_Ggain_onSource(tvColorTemp_t colorTemp, int ggain,int sourceOffset, int saveOnly)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t GetColorTemp_Ggain_onSource(tvColorTemp_t colorTemp, int* ggain,int sourceOffset)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SetColorTemp_Bgain_onSource(tvColorTemp_t colorTemp, int bgain,int sourceOffset, int saveOnly)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t GetColorTemp_Bgain_onSource(tvColorTemp_t colorTemp, int* bgain,int sourceOffset)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SetColorTemp_R_post_offset_onSource(tvColorTemp_t colorTemp, int rpostoffset,int sourceOffset, int saveOnly)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t GetColorTemp_R_post_offset_onSource(tvColorTemp_t colorTemp, int* rpostoffset,int sourceOffset)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SetColorTemp_G_post_offset_onSource(tvColorTemp_t colorTemp, int gpostoffset,int sourceOffset, int saveOnly)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t GetColorTemp_G_post_offset_onSource(tvColorTemp_t colorTemp, int* gpostoffset,int sourceOffset)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SetColorTemp_B_post_offset_onSource(tvColorTemp_t colorTemp, int bpostoffset,int sourceOffset, int saveOnly)
{
   printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
   return tvERROR_NONE;
}

tvError_t GetColorTemp_B_post_offset_onSource(tvColorTemp_t colorTemp, int* bpostoffset,int sourceOffset)
{
   printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
   return tvERROR_NONE;
}

bool isAllZero(tvDataColor_t wbvalue)
{
    bool status = false;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return status;
}

bool isDefaultNormal(tvDataColor_t wbvalue)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return false;
}

bool isDefaultWarm(tvDataColor_t wbvalue)
{
    bool status = false;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return status;
}

bool isDefaultCold(tvDataColor_t wbvalue)
{
    bool status = false;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return status;
}

bool areEqual(tvDataColor_t wbvalueThis,tvDataColor_t wbvalueThat)
{
    bool status = false;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return status;
}

void readWBFromCridata(int source,int colorTemp,tvDataColor_t *wbSD3Val)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
}

tvError_t tvwriteCRIdataBySource(tvColorTemp_t colorTemp, tvDataColor_t wbDefaultVal,int source) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

mfrSerializedType_t getHdmiSd3Param(int colorTemp, int *index)
{
    mfrSerializedType_t type = mfrSERIALIZED_TYPE_SKY_PANEL_HDMI_WB_DATA_NORMAL;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return type;
}

mfrSerializedType_t getTVSd3Param(int colorTemp, int *index)
{
    mfrSerializedType_t type = mfrSERIALIZED_TYPE_SKY_PANEL_TV_WB_DATA_NORMAL;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return type;
}

mfrSerializedType_t getAVSd3Param(int colorTemp, int *index)
{
    mfrSerializedType_t type = mfrSERIALIZED_TYPE_SKY_PANEL_AV_WB_DATA_NORMAL;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return type;
}


mfrSerializedType_t getSD3ParamType(int source,int colorTemp, int *index)
{
    mfrSerializedType_t retType = mfrSERIALIZED_TYPE_SKY_PANEL_HDMI_WB_DATA_NORMAL;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return retType;
}

unsigned char statusOfReadSD3Entry (tvDataColor_t fromSD3,int colorTemp)
{
    unsigned char status = 0;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return status;
}

void tvCopySD3DatatoCridataEx(void) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
}

tvError_t setWBctrl(char *inputSrc, char *colorTemp,char *color, char *ctrl, int value)
{
    tvError_t error = tvERROR_NONE;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return error;
}

tvError_t getWBctrl(char *inputSrc, char *colortemp, char *color, char *ctrl, int *value)
{
    tvError_t result = tvERROR_NONE;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return result;
}

mfrSerializedType_t getParamType(int i)
{
    mfrSerializedType_t type=mfrSERIALIZED_TYPE_SKY_PANEL_HDMI_WB_DATA_NORMAL;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return type;
}

tvError_t getWbInfo(getWBInfo_t* params, std::vector<std::string> &selector
                , std::vector<std::string> &colorTmp, std::vector<std::string> &input)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

void setLDMin(const char* enable)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
}

int TVWriteSysfs(const char *path, const char * cmd)
{
    int err=0;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return err;
}


tvError_t enableWBmode(bool value)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t GetTVSupportedDimmingModes(char **dimmingModes,unsigned short *count) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

bool isSupportedDimmingMode(const char *dimmingMode)
{
    bool status = false;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return status;
}

tvError_t SetTVDimmingMode(const char *dimmingMode) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t GetSupportedComponentColor(int *blComponentColor)
{
   printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SetCurrentComponentSaturation(tvDataComponentColor_t blSaturationColor, int saturation)
{
   printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
   return tvERROR_NONE;
}

tvError_t GetCurrentComponentSaturation(tvDataComponentColor_t blSaturationColor, int *saturation)
{
   printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
   return tvERROR_NONE;
}

tvError_t SetTVBacklightGlobalFactor(int value,int rangeMidPointValue)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t TVUpdateRawBacklight(int value,int midPointValue)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t GetTVBacklightGlobalFactor(int * value)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;

}

tvPictureMode_t GetTVPictureModeIndex(const char * pictureMode)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return getPicModeEnum(pictureMode);
}

tvVideoHDRFormat_t GetCurrentContentFormat(void)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvVideoHDRFormat_NONE;
}

tvError_t GetSupportedContentFormats(unsigned int * contentFormats,unsigned short *numberOfFormats)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t ResetBrightness(int defaultValue,bool resetForAllFormats) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t ResetContrast(int defaultValue,bool resetForAllFormats) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t ResetSharpness(int defaultValue,bool resetForAllFormats) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t ResetSaturation(int defaultValue,bool resetForAllFormats) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t ResetHue(int defaultValue,bool resetForAllFormats) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t ResetBacklight(int defaultValue,bool resetForAllFormats) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t ResetColorTemperature(int defaultValue,bool resetForAllFormats) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SetCurrentComponentHue(tvDataComponentColor_t blHueColor, int hue)
{
   printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
   return tvERROR_NONE;
}

tvError_t GetCurrentComponentHue(tvDataComponentColor_t blHueColor, int *hue)
{
   printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
   return tvERROR_NONE;
}

tvError_t SetCurrentComponentLuma(tvDataComponentColor_t blLumaColor, int luma)
{
   printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
   return tvERROR_NONE;
}

tvError_t GetCurrentComponentLuma(tvDataComponentColor_t blLumaColor, int *luma)
{
   printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
   return tvERROR_NONE;
}

tvError_t SetSDRHDRBacklight(bl_para_t bl_para)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t GetSDRHDRBacklight(bl_para_t *bl_para)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

bool isCurrentHDRTypeIsSDR()
{
    bool ret=true;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return ret;
}

int GetBacklightMidpoint()
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return 255;
}

void SetBacklightMidpoint(int gbfMidValue)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
}

int GetSDRDefaultBacklight(int pqmode)
{
    int backlight=0;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return backlight;
}

int GetHDRDefaultBacklight()
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return 100;
}

int GetPanelID(char *panelid)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return 0;
}

void GetDefaultPanelID(char *panelID)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
}

tvError_t SaveBrightness(int sourceInput, int pq_mode,int hdr_type,int value) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SaveContrast(int sourceInput, int pq_mode,int hdr_type,int value) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SaveSharpness(int sourceInput, int pq_mode,int hdr_type,int value) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SaveSaturation(int sourceInput, int pq_mode,int hdr_type,int value) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SaveHue(int sourceInput, int pq_mode,int hdr_type,int value) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SaveColorTemperature(int sourceInput, int pq_mode,int hdr_type,int value) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SaveBacklight(int sourceInput, int pq_mode,int hdr_type,int value) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SaveDynamicBacklight(int sourceInput, int pq_mode,int hdr_type,int value) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SaveDisplayMode(int sourceInput, int pq_mode,int hdr_type,int value) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SaveDolbyMode(int sourceInput, int pq_mode,int hdr_type,int value) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SaveCMS(int sourceInput, int pq_mode,int hdr_type,int tunnel_type,int color_type,int value) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

int ConvertVideoFormatToHDRFormat(tvVideoHDRFormat_t videoFormat)
{
    int ret=HDR_TYPE_NONE;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return ret;
}

int ConvertHDRFormatToContentFormat(tvhdr_type_t hdrFormat)
{
    int ret=tvContentFormatType_SDR;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return ret;
}

int GetNumberOfModesupported()
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return 0;
}

void GetAllSupportedPicModeIndex(int pic_mode_index[])
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
}

tvError_t ResetComponentLuma(int color,int defaultValue) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t ResetComponentSaturation(int color,int defaultValue) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t ResetComponentHue(int color,int defaultValue) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

int GetCMSDefault(tvCMS_tunel_t color_tunel_type) {
    int default_val = 0;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return default_val;
}

int GetCurrentPQIndex() {
     printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
     return 0;
}

void UpdateCurrentDimmingMode(char *mode) {
     printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
}

int GetDolbyModeIndex(const char * dolbyMode)
{
    unsigned short mode = 0;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return mode;
}

int GetHDR10ModeIndex(const char * hdr10Mode)
{
    int mode = 0;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return mode;
}

int GetHLGModeIndex(const char * hlgMode)
{
    int mode = 0;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return mode;
}

int ConvertTVColorToVendorColor(tvDataComponentColor_t blComponentColor)
{
    int ret=0;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return ret;
}

int GetCustomPQModeIndex()
{
   short int loopcount = 0;
   printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
   return loopcount;
}

tvError_t SetCMSState(tvCMS_tunel_t tunelType,tvcomponent_color_type_t colorType,tvcomponent_state_t componentState)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t ReadCustWBvaluesFromDriverOnInit(void)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvDataColor_t GetUSerWBValueOnInit(void)
{
    tvDataColor_t obj;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return obj;
}

bool isWBUserDfault(tvDataColor_t wbvalue)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return false;
}

int GetWBRgbType(const char *color, const char * ctrl)
{
    int rgb_type = 0;
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return rgb_type;
}

tvError_t SaveColorTemperatureUser(int rgbType, int value)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t SetColorTemperatureUser(int rgbType, int value)
{
     printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

int GetDriverEquivalentBLForCurrentFmt(int backlight)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return 0;
}

tvError_t SetBacklightInfo(tvBacklightInfo_t backlightDefaults)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t GetTVSupportedHLGModes(pic_modes_t *hlgModes[],unsigned short *count) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t GetTVSupportedHDR10Modes(pic_modes_t *hdr10Modes[],unsigned short *count) {
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

tvError_t ReadAllModeConfigfile(const char *file, char *cpybuffer, const char *searchstring)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}

void splitstringsandvaluefrombuffer(char *buffer, pic_modes_t *availableModes[], unsigned short *totalcount)
{
   printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
}

void splitstringsfrombuffer(char *buffer, char *availableModes, unsigned short *totalcount)
{
  printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
}

tvError_t SetBacklightFade(int from,int to,int duration)
{
    printf("%s:%d Stubbed\n", __FUNCTION__, __LINE__);
    return tvERROR_NONE;
}



