//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSSet, NSString;

@protocol ICSWriting
- (_Bool)shouldObscureValue;
- (NSSet *)parametersToObscure;
- (NSSet *)propertiesToObscure;
- (NSSet *)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (NSSet *)parametersToIncludeForChecksumVersion:(int)arg1;
- (NSSet *)propertiesToIncludeForChecksumVersion:(int)arg1;
- (void)ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id <ICSAppendable>)arg2;
- (NSString *)ICSStringWithOptions:(unsigned long long)arg1;
@end

