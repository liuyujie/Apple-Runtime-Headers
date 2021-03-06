//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INCodableDescription.h>

@class NSArray, NSMutableDictionary;

@interface INIntentResponseCodableDescription : INCodableDescription
{
    NSMutableDictionary *_intentResponseCodableCodes;
    NSArray *_responseCodes;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *responseCodes; // @synthesize responseCodes=_responseCodes;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)attributes;
- (id)intentResponseCodeWithCode:(long long)arg1;

@end

