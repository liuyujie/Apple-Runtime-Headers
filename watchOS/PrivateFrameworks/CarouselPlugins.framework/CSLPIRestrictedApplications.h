//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet;

@interface CSLPIRestrictedApplications : NSObject
{
    NSSet *_restrictedApps;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSSet *restrictedApps; // @synthesize restrictedApps=_restrictedApps;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end
