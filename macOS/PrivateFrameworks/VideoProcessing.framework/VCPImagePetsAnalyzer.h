//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideoProcessing/VCPImageAnalyzer.h>

@interface VCPImagePetsAnalyzer : VCPImageAnalyzer
{
    int _maxNumRegions;
}

- (int)analyzePixelBuffer:(struct __CVBuffer *)arg1 flags:(unsigned long long *)arg2 results:(id *)arg3 cancel:(CDUnknownBlockType)arg4;
- (id)initWithMaxNumRegions:(int)arg1;

@end

