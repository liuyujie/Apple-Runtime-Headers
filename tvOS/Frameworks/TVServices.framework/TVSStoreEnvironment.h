//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TVSStoreEnvironment : NSObject
{
    NSString *_environment;
    NSString *_build;
    NSString *_branch;
    NSString *_stringData;
}

@property(retain) NSString *stringData; // @synthesize stringData=_stringData;
@property(retain) NSString *branch; // @synthesize branch=_branch;
@property(retain) NSString *build; // @synthesize build=_build;
@property(retain) NSString *environment; // @synthesize environment=_environment;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) _Bool isProduction;
- (id)initWithStorePage:(id)arg1;
- (id)initWithEnvironmentDictionary:(id)arg1;

@end
