//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DNDEventBehaviorResolutionService : NSObject
{
    NSString *_clientIdentifier;
}

+ (id)serviceForClientIdentifier:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (id)resolveBehaviorForEventDetails:(id)arg1 error:(id *)arg2;
- (id)_initWithClientIdentifier:(id)arg1;

@end

