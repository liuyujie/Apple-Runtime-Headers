//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface ATXPredictionSetBuilder : NSObject
{
    NSMutableData *_data;
    int _predictionCount;
    _Bool _finished;
}

- (void).cxx_destruct;
- (id)finish;
- (void)recordPrediction:(id)arg1 score:(float)arg2;
- (id)init;

@end
