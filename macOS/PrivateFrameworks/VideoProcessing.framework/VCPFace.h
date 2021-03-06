//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VNFaceObservation;

@interface VCPFace : NSObject
{
    BOOL _leftEyeClosed;
    BOOL _rightEyeClosed;
    BOOL _smile;
    int _trackID;
    float _confidence;
    long long _yaw;
    VNFaceObservation *_observation;
    struct CGRect _bounds;
}

@property(retain) VNFaceObservation *observation; // @synthesize observation=_observation;
@property float confidence; // @synthesize confidence=_confidence;
@property int trackID; // @synthesize trackID=_trackID;
@property long long yaw; // @synthesize yaw=_yaw;
@property BOOL smile; // @synthesize smile=_smile;
@property BOOL rightEyeClosed; // @synthesize rightEyeClosed=_rightEyeClosed;
@property BOOL leftEyeClosed; // @synthesize leftEyeClosed=_leftEyeClosed;
@property struct CGRect bounds; // @synthesize bounds=_bounds;
- (void).cxx_destruct;
- (struct CGRect)faceBoundsWithTransform:(unsigned long long)arg1 height:(unsigned long long)arg2 transform:(struct CGAffineTransform)arg3;
- (struct CGRect)faceBounds:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (unsigned long long)flagsForOrientation:(BOOL)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (id)init;

@end

