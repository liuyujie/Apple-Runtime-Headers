//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@interface PBSMigration : NSObject
{
    Class _handlingClass;
    NSString *_name;
    CDUnknownBlockType _handler;
    unsigned long long _state;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned long long)executeMigrationWithContext:(id)arg1;
- (id)initWithName:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithHandlingClass:(Class)arg1;
- (id)init;

@end
