//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideoProcessing/VCPCNNSmileDetector.h>

@class VCPCNNData, VCPCNNModel;

@interface VCPCNNSmileDetectorMPS : VCPCNNSmileDetector
{
    VCPCNNModel *_model;
    VCPCNNData *_input;
}

- (void).cxx_destruct;
- (int)computeSmileScore:(float *)arg1;
- (float *)getInputBuffer;
- (id)init;

@end
