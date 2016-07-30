//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CXDatabaseStatement : NSObject
{
    struct sqlite3_stmt *_statement;
    struct sqlite3 *_database;
}

@property(nonatomic) struct sqlite3 *database; // @synthesize database=_database;
@property(nonatomic) struct sqlite3_stmt *statement; // @synthesize statement=_statement;
- (_Bool)processResultsWithExpectedColumnCount:(long long)arg1 resultRowHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (_Bool)bind:(id)arg1 error:(id *)arg2;
- (_Bool)executeWithBindings:(id)arg1 expectedColumnCount:(long long)arg2 resultRowHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (_Bool)executeWithBindings:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithSQL:(id)arg1 database:(id)arg2 error:(id *)arg3;

@end
