//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSKCOOperation.h"

__attribute__((visibility("hidden")))
@interface TSKCOAbstractOperation : NSObject <TSKCOOperation>
{
    _Bool _noop;
}

+ (id)newObjectForUnarchiver:(id)arg1 message:(const struct Message *)arg2;
+ (void)registerClass:(Class)arg1 forExtensionNumber:(int)arg2;
+ (id)_classRegistry;
@property(readonly, nonatomic) _Bool isNoop; // @synthesize isNoop=_noop;
- (void)saveToArchiver:(id)arg1 message:(struct Operation *)arg2;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Operation *)arg2;
- (id)toString;
- (id)description;
- (id)initWithNoop:(_Bool)arg1;

@end

