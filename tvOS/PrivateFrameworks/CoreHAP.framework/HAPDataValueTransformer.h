//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreHAP/HAPValueTransformer.h>

@interface HAPDataValueTransformer : HAPValueTransformer
{
}

+ (void)initialize;
+ (id)defaultDataValueTransformer;
+ (_Bool)isValidFormat:(unsigned long long)arg1;
+ (Class)expectedTransformedClassForFormat:(unsigned long long)arg1;
- (id)reverseTransformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;
- (id)transformedValue:(id)arg1 format:(unsigned long long)arg2 error:(id *)arg3;

@end

