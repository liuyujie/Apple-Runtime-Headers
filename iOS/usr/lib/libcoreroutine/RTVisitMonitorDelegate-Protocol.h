//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, RTVisit, RTVisitMonitorState;

@protocol RTVisitMonitorDelegate <NSObject>

@optional
- (void)onVisitMonitorStateChanged:(RTVisitMonitorState *)arg1;
- (void)onLowConfidenceVisitIncident:(RTVisit *)arg1 error:(NSError *)arg2;
- (void)onLeechedVisitIncident:(RTVisit *)arg1 error:(NSError *)arg2;
- (void)onVisitIncident:(RTVisit *)arg1 error:(NSError *)arg2;
@end

