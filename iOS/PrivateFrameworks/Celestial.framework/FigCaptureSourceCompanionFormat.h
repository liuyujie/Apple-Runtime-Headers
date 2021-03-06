//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FigCaptureSourceCompanionFormat : NSObject
{
    int _formatIndex;
    CDStruct_79c71658 _fesDimensions;
    CDStruct_79c71658 _fesInputCropDimensions;
    CDStruct_79c71658 _outputCropDimensionsWhenFesIsEnabled;
    CDStruct_79c71658 _sensorCropDimensions;
    _Bool _option2;
}

@property(readonly) _Bool option2; // @synthesize option2=_option2;
@property(readonly) CDStruct_79c71658 sensorCropDimensions; // @synthesize sensorCropDimensions=_sensorCropDimensions;
@property(readonly) CDStruct_79c71658 outputCropDimensionsWhenFesIsEnabled; // @synthesize outputCropDimensionsWhenFesIsEnabled=_outputCropDimensionsWhenFesIsEnabled;
@property(readonly) CDStruct_79c71658 fesInputCropDimensions; // @synthesize fesInputCropDimensions=_fesInputCropDimensions;
@property(readonly) CDStruct_79c71658 fesDimensions; // @synthesize fesDimensions=_fesDimensions;
@property(readonly) int formatIndex; // @synthesize formatIndex=_formatIndex;
- (id)description;
- (void)dealloc;
- (id)initWithCompanionFormatDictionary:(id)arg1;

@end

