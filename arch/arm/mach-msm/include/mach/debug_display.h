/*
 *
 */
#ifndef __LOG_MESSAGE_H__
#define __LOG_MESSAGE_H__


#define PR_DISP_ERR(fmt, args...) 		pr_err("[DISP] "fmt, ##args);
#define PR_DISP_WARN(fmt, args...) 		pr_warn("[DISP] "fmt, ##args);
#define PR_DISP_INFO(fmt, args...) 		pr_info("[DISP] "fmt, ##args)
#define PR_DISP_DEBUG(fmt, args...) 		pr_debug("[DISP] "fmt, ##args);

#endif /* __LOG_MESSAGE_H__ */
