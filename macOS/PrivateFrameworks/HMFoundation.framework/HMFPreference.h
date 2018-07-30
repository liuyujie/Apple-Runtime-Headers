//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSNumber, NSString;

@interface HMFPreference : HMFObject
{
    NSString *_key;
    unsigned long long _options;
    id <NSObject> _value;
}

+ (id)shortDescription;
@property(copy) id <NSObject> value; // @synthesize value=_value;
@property(readonly) unsigned long long options; // @synthesize options=_options;
@property(readonly) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *dataValue;
@property(readonly, copy, nonatomic) NSString *stringValue;
@property(readonly, copy, nonatomic) NSNumber *numberValue;
@property(readonly, nonatomic) BOOL boolValue;
- (id)shortDescription;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3;
- (id)init;

@end
