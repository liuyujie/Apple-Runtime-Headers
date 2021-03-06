//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary;

@interface FCRFace : NSObject
{
    CDStruct_53bda269 face;
    CDStruct_53bda269 leftEye;
    CDStruct_53bda269 rightEye;
    CDStruct_53bda269 mouth;
    float faceSize;
    float faceAngle;
    int trackID;
    unsigned int trackDuration;
    NSData *faceprint;
    int faceType;
    NSDictionary *faceLandmarkPoints;
    NSDictionary *expressionFeatures;
    NSDictionary *additionalInfo;
}

@property(retain) NSDictionary *additionalInfo; // @synthesize additionalInfo;
@property int trackID; // @synthesize trackID;
@property unsigned int trackDuration; // @synthesize trackDuration;
@property CDStruct_53bda269 rightEye; // @synthesize rightEye;
@property CDStruct_53bda269 mouth; // @synthesize mouth;
@property CDStruct_53bda269 leftEye; // @synthesize leftEye;
@property(retain) NSData *faceprint; // @synthesize faceprint;
@property int faceType; // @synthesize faceType;
@property float faceSize; // @synthesize faceSize;
@property(retain) NSDictionary *faceLandmarkPoints; // @synthesize faceLandmarkPoints;
@property CDStruct_53bda269 face; // @synthesize face;
@property float faceAngle; // @synthesize faceAngle;
@property(retain) NSDictionary *expressionFeatures; // @synthesize expressionFeatures;
@property(readonly) _Bool hasMouthBounds;
@property(readonly) _Bool hasRightEyeBounds;
@property(readonly) _Bool hasLeftEyeBounds;
- (void)dealloc;

@end

