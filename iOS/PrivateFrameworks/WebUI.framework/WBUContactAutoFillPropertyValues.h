//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, WBUContactAutoFillValue;

@interface WBUContactAutoFillPropertyValues : NSObject
{
    unsigned long long _selectedIndex;
    NSArray *_values;
    NSString *_property;
}

@property(readonly, copy, nonatomic) NSString *property; // @synthesize property=_property;
@property(readonly, copy, nonatomic) NSArray *values; // @synthesize values=_values;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
@property(readonly, nonatomic) WBUContactAutoFillValue *selectedValue;
- (id)initWithValues:(id)arg1 property:(id)arg2;

@end
