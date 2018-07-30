//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, VCPVideoActivityDescriptor;

@interface VCPFrameAnalysisStats : NSObject
{
    BOOL _frameProcessedByVideoAnalyzer;
    BOOL _subMbMotionAvailable;
    BOOL _frameProcessedByFaceDetector;
    float _cameraMotionScore;
    float _subjectActionScore;
    float _interestingnessScore;
    float _obstructionScore;
    float _exposureScore;
    float _colorfulnessScore;
    NSMutableArray *_detectedFaces;
    VCPVideoActivityDescriptor *_videoActivityDescriptor;
}

@property(retain, nonatomic) VCPVideoActivityDescriptor *videoActivityDescriptor; // @synthesize videoActivityDescriptor=_videoActivityDescriptor;
@property(retain, nonatomic) NSMutableArray *detectedFaces; // @synthesize detectedFaces=_detectedFaces;
@property(nonatomic) BOOL frameProcessedByFaceDetector; // @synthesize frameProcessedByFaceDetector=_frameProcessedByFaceDetector;
@property(nonatomic) BOOL subMbMotionAvailable; // @synthesize subMbMotionAvailable=_subMbMotionAvailable;
@property(nonatomic) float colorfulnessScore; // @synthesize colorfulnessScore=_colorfulnessScore;
@property(nonatomic) float exposureScore; // @synthesize exposureScore=_exposureScore;
@property(nonatomic) float obstructionScore; // @synthesize obstructionScore=_obstructionScore;
@property(nonatomic) float interestingnessScore; // @synthesize interestingnessScore=_interestingnessScore;
@property(nonatomic) float subjectActionScore; // @synthesize subjectActionScore=_subjectActionScore;
@property(nonatomic) float cameraMotionScore; // @synthesize cameraMotionScore=_cameraMotionScore;
@property(nonatomic) BOOL frameProcessedByVideoAnalyzer; // @synthesize frameProcessedByVideoAnalyzer=_frameProcessedByVideoAnalyzer;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end
