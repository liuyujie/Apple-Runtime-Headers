//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, _INPBCallMetrics;

@protocol _INPBStartAudioCallIntentResponse <NSObject>
@property(readonly, nonatomic) unsigned long long targetContactsCount;
@property(copy, nonatomic) NSArray *targetContacts;
@property(readonly, nonatomic) _Bool hasStatus;
@property(copy, nonatomic) NSString *status;
@property(readonly, nonatomic) _Bool hasMetrics;
@property(retain, nonatomic) _INPBCallMetrics *metrics;
@property(nonatomic) _Bool hasAudioRoute;
@property(nonatomic) int audioRoute;
- (NSString *)targetContactsAtIndex:(unsigned long long)arg1;
- (void)addTargetContacts:(NSString *)arg1;
- (void)clearTargetContacts;
- (int)StringAsAudioRoute:(NSString *)arg1;
- (NSString *)audioRouteAsString:(int)arg1;
@end

