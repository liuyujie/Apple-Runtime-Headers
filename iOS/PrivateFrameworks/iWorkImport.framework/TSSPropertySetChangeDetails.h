//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSSMutablePropertySet;

__attribute__((visibility("hidden")))
@interface TSSPropertySetChangeDetails : NSObject
{
    TSSMutablePropertySet *mChangedProperties;
}

- (void).cxx_destruct;
- (id)changedProperties;
- (void)addChangedProperties:(id)arg1;
- (void)addChangedProperty:(int)arg1;
- (id)init;
- (id)initWithChangedProperties:(id)arg1;

@end

