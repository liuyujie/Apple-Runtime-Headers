//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMFitnessMachineInternal;

@interface CMFitnessMachine : NSObject
{
    CMFitnessMachineInternal *_internal;
}

+ (_Bool)isAvailable;
@property(readonly, nonatomic) CMFitnessMachineInternal *_internal; // @synthesize _internal;
- (void)feedFitnessMachineData:(id)arg1;
- (void)dealloc;
- (id)init;

@end

