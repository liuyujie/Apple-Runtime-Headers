//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <coreroutine/RTNotification.h>

@class NSArray;

@interface RTLocationManagerNotificationLocationsLeeched : RTNotification
{
    NSArray *_leechedLocations;
}

@property(readonly, nonatomic) NSArray *leechedLocations; // @synthesize leechedLocations=_leechedLocations;
- (void).cxx_destruct;
- (id)initWithLocations:(id)arg1;

@end

