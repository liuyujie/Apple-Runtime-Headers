//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MKValueDeviceManager : NSObject
{
    NSMutableDictionary *_values;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)stringForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (unsigned int)uIntegerForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)_configureValues;

@end

