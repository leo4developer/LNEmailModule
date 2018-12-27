//
//  LoginModel.h
//  creatorMail
//
//  Created by leo on 2018/12/13.
//  Copyright © 2018 leo. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LoginModel : NSObject
/**
 * @username 邮箱账号
 */
@property (nonatomic, copy) NSString *username;
/**
 * @password 邮箱密码
 */
@property (nonatomic, copy) NSString *password;
/**
 * @imapHostname imap服务器地址
 */
@property (nonatomic, copy) NSString *imapHostname;
/**
 * @imapPort imap协议端口号
 */
@property (nonatomic, assign) int imapPort;
/**
 * @imapConnectionType imap加密类型
 */
@property (nonatomic, assign) NSInteger imapConnectionType;

/**
 * @smtpHostname smtp服务器地址
 */
@property (nonatomic, copy) NSString *smtpHostname;
/**
 * @smtpPort smtp协议端口号
 */
@property (nonatomic, assign) int smtpPort;
/**
 * @smtpAuthType 这是使用连接的身份验证类型。
 *“MCOAuthTypeSASLNone”意味着它使用明文使用(并且是默认的)。
 *@warning *重要*:如TLS加密的连接,密码仍然是安全的
 */
@property (nonatomic, assign) NSInteger smtpConnectionType;
@end

NS_ASSUME_NONNULL_END
