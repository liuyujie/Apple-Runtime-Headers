//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface HKHeartbeatSequenceChartData : NSObject
{
    float _initialXAxisOffset;
    NSMutableArray *_sections;
}

@property(readonly, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(nonatomic) float initialXAxisOffset; // @synthesize initialXAxisOffset=_initialXAxisOffset;
- (void).cxx_destruct;
- (void)_expandToSection:(int)arg1;
- (void)enumerateSequences:(CDUnknownBlockType)arg1;
- (int)sectionCount;
- (void)addSequencePoint:(id)arg1 section:(int)arg2;
- (id)init;

@end

