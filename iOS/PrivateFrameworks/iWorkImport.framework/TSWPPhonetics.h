//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface TSWPPhonetics : NSObject
{
    NSDictionary *_transcribers;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedDictionary;
+ (id)_singletonAlloc;
- (void).cxx_destruct;
- (id)transcriberWithIdentifier:(id)arg1;
- (id)transcriberForBaseText:(id)arg1 range:(struct _NSRange)arg2 gettingLocale:(id *)arg3 inputLanguage:(id *)arg4;
- (id)pronunciationForBaseText:(id)arg1 locale:(id)arg2 inputLanguage:(id)arg3;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
