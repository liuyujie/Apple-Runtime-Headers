//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ARFrame;

@interface AVTFaceTrackingInfo : NSObject
{
    CDStruct_40c3f62d *_trackingData;
    _Bool _deleteWhenDone;
    _Bool _hasFaceTrackingData;
    ARFrame *_arFrame;
    double _timestamp;
}

+ (id)trackingInfoWrappingTrackingData:(CDStruct_40c3f62d *)arg1;
@property(readonly, nonatomic) _Bool hasFaceTrackingData; // @synthesize hasFaceTrackingData=_hasFaceTrackingData;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) ARFrame *arFrame; // @synthesize arFrame=_arFrame;
- (void).cxx_destruct;
- (CDStruct_40c3f62d *)trackingData;
- (void)dealloc;

@end
