//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SGLabeledValue : NSObject
{
    NSString *_label;
    NSString *_value;
}

@property(readonly, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToLabeledValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithLabel:(id)arg1 value:(id)arg2;

@end

