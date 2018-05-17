//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideoProcessing/VCPImageAnalyzer.h>

@class NSURL, VCPCNNModel;

@interface VCPImagePetsAnalyzer : VCPImageAnalyzer
{
    BOOL _useGPU;
    int _maxNumRegions;
    BOOL _prune;
    VCPCNNModel *_model;
    int _inputChannels;
    NSURL *_modelURL;
}

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;
- (int)petsDetection:(struct __CVBuffer *)arg1 petsRegions:(id)arg2 cancel:(CDUnknownBlockType)arg3;
- (int)generatePetsRegion:(id)arg1 boxes:(id)arg2;
- (void)nonMaxSuppression:(id)arg1;
- (int)createInput:(id)arg1 withBuffer:(struct __CVBuffer *)arg2 width:(int)arg3 height:(int)arg4;
- (int)createModel;
- (int)createConv1x1Block:(int)arg1;
- (int)createConv3x3Block:(int)arg1 stride:(int)arg2;
- (int)createBasicBlock:(int)arg1 stride:(int)arg2;
- (int)createGroup4Conv3x3Block:(int)arg1 stride:(int)arg2;
- (id)initWithMaxNumRegions:(int)arg1;

@end
